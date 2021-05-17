//
//  GoogleDirectionBound.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionCoordination.h"

NS_ASSUME_NONNULL_BEGIN

/// bounds
@interface GoogleDirectionBound : NSObject

@property (nonatomic, strong) GoogleDirectionCoordination *northeast;
@property (nonatomic, strong) GoogleDirectionCoordination *southwest;

@end

NS_ASSUME_NONNULL_END
