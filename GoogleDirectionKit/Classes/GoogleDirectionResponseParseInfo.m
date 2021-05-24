//
//  GoogleDirectionResponseParseInfo.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionResponseParseInfo.h"

@implementation GoogleDirectionResponseParseInfo

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"geocoded_waypoints" : [GoogleGeocodedWaypoint class], @"routes" : [GoogleDirectionRoute class]};
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"geocoded_waypoints" : [GoogleGeocodedWaypoint class], @"routes" : [GoogleDirectionRoute class]};
}

@end
