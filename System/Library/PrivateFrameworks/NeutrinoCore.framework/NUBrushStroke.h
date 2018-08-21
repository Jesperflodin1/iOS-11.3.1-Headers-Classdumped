/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData;

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying> {

	float _radius;
	float _softness;
	float _opacity;
	long long _pressureMode;
	SCD_Struct_NU6 _extent;
	NSMutableData* _data;

}

@property (nonatomic,readonly) float radius;                        //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) float softness;                      //@synthesize softness=_softness - In the implementation block
@property (nonatomic,readonly) float opacity;                       //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) long long pressureMode;              //@synthesize pressureMode=_pressureMode - In the implementation block
+(id)brushStrokeFromDictionary:(id)arg1 ;
+(id)dictionaryFromBrushStroke:(id)arg1 ;
-(long long)pointCount;
-(id)points;
-(SCD_Struct_NU19)pointAtIndex:(long long)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)opacity;
-(SCD_Struct_NU6)extent;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(float)radius;
-(float)softness;
-(long long)pressureMode;
-(id)_createPointArrayFromData:(id)arg1 ;
-(id)_createDataFromPointArray:(id)arg1 ;
-(void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(SCD_Struct_NU6)arg4 data:(id)arg5 pressureMode:(long long)arg6 ;
-(void)_updateExtent;
-(id)ciImageTiled:(BOOL)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
-(void)writeToTIFFAtPath:(id)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
@end

