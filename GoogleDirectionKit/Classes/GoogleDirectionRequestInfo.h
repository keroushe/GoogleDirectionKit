//
//  GoogleDirectionRequestInfo.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionRequestInfo : NSObject

// origin
@property (nonatomic, copy) NSString *origin;
// destination
@property (nonatomic, copy) NSString *destination;
// mode
@property (nonatomic, copy) NSString *transportMode;
// departure_time
@property (nonatomic, copy) NSString *departureTime;

// language
@property (nonatomic, copy) NSString *language;
// units
@property (nonatomic, copy) NSString *unit;
// avoid
@property (nonatomic, copy) NSString *avoid;
// transit_mode
@property (nonatomic, copy) NSString *transitMode;
// traffic_model
@property (nonatomic, copy) NSString *trafficModel;
// transit_routing_preference
@property (nonatomic, copy) NSString *transitRoutingPreference;

@property (nonatomic, assign) BOOL alternatives;

@property (nonatomic, copy) NSString *apiKey;
//-37.81223,144.96254
@property (nonatomic, strong) NSArray<NSString *> *waypoints;
@property (nonatomic, assign) BOOL optimizeWaypoints;

- (NSString *)getParmsString;

@end

NS_ASSUME_NONNULL_END
