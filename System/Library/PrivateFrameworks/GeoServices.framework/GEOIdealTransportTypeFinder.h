/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOIdealTransportTypeFinder : NSObject
+(long long)idealTransportTypeForOrigin:(SCD_Struct_GE29)arg1 destination:(SCD_Struct_GE29)arg2 mapType:(int)arg3 ;
+(long long)idealTransportTypeForMapType:(int)arg1 ;
+(long long)idealTransportType;
+(id)_transportTypePreferenceAsString:(long long)arg1 ;
@end

