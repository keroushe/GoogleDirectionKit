//
//  GoogleDirectionTransitDetail.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionStopPoint.h"
#import "GoogleDirectionTimeInfo.h"
#import "GoogleDirectionLine.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionTransitDetail : NSObject

@property (nonatomic, strong) GoogleDirectionStopPoint *arrival_stop;
@property (nonatomic, strong) GoogleDirectionTimeInfo *arrival_time;
@property (nonatomic, strong) GoogleDirectionStopPoint *departure_stop;
@property (nonatomic, strong) GoogleDirectionTimeInfo *departure_time;
@property (nonatomic, strong) GoogleDirectionLine *line;
@property (nonatomic, copy) NSString *headsign;
@property (nonatomic, copy) NSString *num_stops;

@end

NS_ASSUME_NONNULL_END
