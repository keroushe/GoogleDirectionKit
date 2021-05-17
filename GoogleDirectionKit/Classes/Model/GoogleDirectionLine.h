//
//  GoogleDirectionLine.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionAgency.h"
#import "GoogleDirectionVehicle.h"

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionLine : NSObject

@property (nonatomic, strong) NSArray<GoogleDirectionAgency *> *agencies;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *short_name;
@property (nonatomic, copy) NSString *text_color;
@property (nonatomic, strong) GoogleDirectionVehicle *vehicle;

@end

NS_ASSUME_NONNULL_END
