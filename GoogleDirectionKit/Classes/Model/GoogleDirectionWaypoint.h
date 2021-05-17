//
//  GoogleDirectionWaypoint.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionCoordination.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionWaypoint : NSObject

@property (nonatomic, strong) GoogleDirectionCoordination *location;
@property (nonatomic, assign) int step_index;
@property (nonatomic, assign) double step_interpolation;

@end

NS_ASSUME_NONNULL_END
