//
//  GoogleDirectionConstant.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#ifndef GoogleDirectionConstant_h
#define GoogleDirectionConstant_h

// AvoidType
#define GoogleDirectionAvoidType_TOLLS @"tolls" //表示计算出的路线应避开收费公路/桥梁
#define GoogleDirectionAvoidType_HIGHWAYS @"highways" //表示计算出的路线应避开高速公路
#define GoogleDirectionAvoidType_FERRIES @"ferries" //表示计算出的路线应避开轮渡
#define GoogleDirectionAvoidType_INDOOR @"indoor" //表示计算出的路线应避开步行和中转路线的室内台阶

// DirectionUrl
#define GoogleDirectionDirectionUrl @"https://maps.googleapis.com/maps/api/directions/json"

// Language
#define GoogleDirectionLanguage_ENGLISH @"en"
#define GoogleDirectionLanguage_CHINESE_Simplified @"zh-CN"

// TransitMode
#define GoogleDirectionTransitMode_BUS @"bus" //表示计算出的路线应优先乘坐公交车
#define GoogleDirectionTransitMode_SUBWAY @"subway" //表示计算出的路线应优先乘坐地铁
#define GoogleDirectionTransitMode_TRAIN @"train" //表示计算出的路线应优先乘坐火车
#define GoogleDirectionTransitMode_TRAM @"tram" //表示计算出的路线应优先乘坐电车和轻轨
#define GoogleDirectionTransitMode_RAIL @"rail" //表示计算出的路线应优先乘坐火车，电车，轻轨和地铁

// TransitRoutingPreference
#define GoogleDirectionTransitRoutingPreference_LESS_WALKING @"less_walking" //表示计算出的路线应优先选择有限的步行量
#define GoogleDirectionTransitRoutingPreference_FEWER_TRANSFERS @"fewer_transfers" //表示计算出的路线应优先选择数量有限的中转路线

// TransportMode
#define GoogleDirectionTransportMode_DRIVING @"driving" //表示使用道路网络的标准行车路线
#define GoogleDirectionTransportMode_WALKING @"walking" //请求通过人行道和人行道（如果有）的步行路线
#define GoogleDirectionTransportMode_BICYCLING @"bicycling" //通过自行车道和首选街道（如果有）请求骑车路线
#define GoogleDirectionTransportMode_TRANSIT @"transit" //通过公共交通路线（如果有）请求路线

// Unit
#define GoogleDirectionUnit_METRIC @"metric"
#define GoogleDirectionUnit_IMPERIAL @"imperial"

#endif /* GoogleDirectionConstant_h */
