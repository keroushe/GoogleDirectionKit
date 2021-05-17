//
//  GoogleDirectionStep.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionInfo.h"
#import "GoogleDirectionCoordination.h"
#import "GoogleDirectionTransitDetail.h"
#import "GoogleDirectionRoutePolyline.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionStep : NSObject

@property (nonatomic, strong) GoogleDirectionInfo *distance;
@property (nonatomic, strong) GoogleDirectionInfo *duration;
@property (nonatomic, strong) GoogleDirectionCoordination *end_location;
@property (nonatomic, copy) NSString *html_instructions;
@property (nonatomic, copy) NSString *maneuver;
@property (nonatomic, strong) GoogleDirectionCoordination *start_location;
@property (nonatomic, strong) GoogleDirectionTransitDetail *transit_details;
@property (nonatomic, strong) GoogleDirectionRoutePolyline *polyline;
@property (nonatomic, copy) NSString *travel_mode;

@end

NS_ASSUME_NONNULL_END
