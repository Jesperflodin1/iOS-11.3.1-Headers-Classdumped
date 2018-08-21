/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	SCD_Struct_GE29 _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) SCD_Struct_GE29 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_GE29)shiftedCoordinateForCoordinate:(SCD_Struct_GE29)arg1 accuracy:(double*)arg2 ;
-(BOOL)isValidForCoordinate:(SCD_Struct_GE29)arg1 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE29)arg2 version:(unsigned)arg3 ;
-(SCD_Struct_GE29)originalCoordinate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)version;
-(double)radius;
@end
