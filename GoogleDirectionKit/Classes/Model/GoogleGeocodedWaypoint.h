//
//  GoogleGeocodedWaypoint.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GoogleGeocodedWaypoint : NSObject

@property (nonatomic, copy) NSString *geocoder_status;
@property (nonatomic, copy) NSString *place_id;
@property (nonatomic, strong) NSArray<NSString *> *types;

@end

NS_ASSUME_NONNULL_END
