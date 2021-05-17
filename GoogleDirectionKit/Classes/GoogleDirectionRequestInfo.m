//
//  GoogleDirectionRequestInfo.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionRequestInfo.h"

@implementation GoogleDirectionRequestInfo

- (NSString *)getParmsString
{
    if (_origin.length <= 0 ||
        _destination.length <= 0 ||
        _apiKey.length <= 0)
    {
        return nil;
    }
    
    NSMutableString *parmsStr = [[NSMutableString alloc] init];
    // 必须参数origin,destination
    [parmsStr appendFormat:@"origin=%@", _origin];
    [parmsStr appendFormat:@"&destination=%@", _destination];
    [parmsStr appendFormat:@"&key=%@", _apiKey];
    
    // 可选参数
    if (_transportMode.length > 0) {
        [parmsStr appendFormat:@"&mode=%@", _transportMode];
    }
    if (_departureTime.length > 0) {
        [parmsStr appendFormat:@"&departure_time=%@", _departureTime];
    }
    if (_language.length > 0) {
        [parmsStr appendFormat:@"&language=%@", _language];
    }
    if (_unit.length > 0) {
        [parmsStr appendFormat:@"&units=%@", _unit];
    }
    if (_avoid.length > 0) {
        [parmsStr appendFormat:@"&avoid=%@", _avoid];
    }
    if (_transitMode.length > 0) {
        [parmsStr appendFormat:@"&transit_mode=%@", _transitMode];
    }
    if (_trafficModel.length > 0) {
        [parmsStr appendFormat:@"&traffic_model=%@", _trafficModel];
    }
    if (_transitRoutingPreference.length > 0) {
        [parmsStr appendFormat:@"&transit_routing_preference=%@", _transitRoutingPreference];
    }
    [parmsStr appendFormat:@"&alternatives=%d", _alternatives];
    // waypoints
    NSString *waypointsStr = [GoogleDirectionRequestInfo waypointsToString:_waypoints optimizeWaypoints:_optimizeWaypoints];
    if (waypointsStr.length > 0) {
        [parmsStr appendFormat:@"&waypoints=%@", waypointsStr];
    }
    
    return parmsStr;
}

+ (NSString *)waypointsToString:(NSArray<NSString *> *)waypoints optimizeWaypoints:(BOOL)optimizeWaypoints
{
    NSString *result = nil;
    if (waypoints != nil && waypoints.count > 0) {
        NSMutableString *mutableStr = [[NSMutableString alloc] init];
        [mutableStr appendString:(optimizeWaypoints ? @"optimize:true|" : @"")];
        [mutableStr appendString:waypoints[0]];
        for (int i = 1; i < waypoints.count; i++) {
            [mutableStr appendFormat:@"|%@", waypoints[i]];
        }
        return mutableStr;
    }
    
    return result;
}

@end
