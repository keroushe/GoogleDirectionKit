//
//  GoogleDirectionResponseParseInfo.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleGeocodedWaypoint.h"
#import "GoogleDirectionRoute.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionResponseParseInfo : NSObject

// geocoded_waypoints
@property (nonatomic, strong) NSArray<GoogleGeocodedWaypoint *> *geocoded_waypoints;
// routes
@property (nonatomic, strong) NSArray<GoogleDirectionRoute *> *routes;
// status
@property (nonatomic, copy) NSString *status;
// error_message
@property (nonatomic, copy) NSString *error_message;

@end

NS_ASSUME_NONNULL_END
