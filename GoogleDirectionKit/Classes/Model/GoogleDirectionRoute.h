//
//  GoogleDirectionRoute.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionBound.h"
#import "GoogleDirectionLeg.h"
#import "GoogleDirectionRoutePolyline.h"
#import "GoogleDirectionFare.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionRoute : NSObject

@property (nonatomic, strong) GoogleDirectionBound *bounds;
@property (nonatomic, copy) NSString *copyrights;
@property (nonatomic, strong) NSArray<GoogleDirectionLeg *> *legs;
@property (nonatomic, strong) GoogleDirectionRoutePolyline *overview_polyline;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, strong) GoogleDirectionFare *fare;
@property (nonatomic, strong) NSArray<NSString *> *warnings;
@property (nonatomic, strong) NSArray<NSNumber *> *waypoint_order;

@end

NS_ASSUME_NONNULL_END
