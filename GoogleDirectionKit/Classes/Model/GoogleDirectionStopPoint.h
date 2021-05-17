//
//  GoogleDirectionStopPoint.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionCoordination.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionStopPoint : NSObject

@property (nonatomic, strong) GoogleDirectionCoordination *location;
@property (nonatomic, copy) NSString *name;

@end

NS_ASSUME_NONNULL_END
