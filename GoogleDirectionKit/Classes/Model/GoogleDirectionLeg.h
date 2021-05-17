//
//  GoogleDirectionLeg.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionTimeInfo.h"
#import "GoogleDirectionInfo.h"
#import "GoogleDirectionCoordination.h"
#import "GoogleDirectionStep.h"
#import "GoogleDirectionWaypoint.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionLeg : NSObject

@property (nonatomic, strong) GoogleDirectionTimeInfo *arrival_time;
@property (nonatomic, strong) GoogleDirectionTimeInfo *departure_time;
@property (nonatomic, strong) GoogleDirectionInfo *distance;
@property (nonatomic, strong) GoogleDirectionInfo *duration;
@property (nonatomic, strong) GoogleDirectionInfo *duration_in_traffic;
@property (nonatomic, copy) NSString *end_address;
@property (nonatomic, strong) GoogleDirectionCoordination *end_location;
@property (nonatomic, copy) NSString *start_address;
@property (nonatomic, strong) GoogleDirectionCoordination *start_location;
@property (nonatomic, strong) NSArray<GoogleDirectionStep *> *steps;
@property (nonatomic, strong) NSArray<GoogleDirectionWaypoint *> *via_waypoint;

@end

NS_ASSUME_NONNULL_END
