//
//  GoogleDirectionLeg.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionLeg.h"

@implementation GoogleDirectionLeg

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"steps" : [GoogleDirectionStep class], @"via_waypoint": [GoogleDirectionWaypoint class]};
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"steps" : [GoogleDirectionStep class], @"via_waypoint": [GoogleDirectionWaypoint class]};
}

@end
