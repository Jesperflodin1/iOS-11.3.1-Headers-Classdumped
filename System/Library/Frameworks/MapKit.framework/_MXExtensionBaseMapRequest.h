/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MXExtensionBaseMapRequest : NSObject <NSSecureCoding> {

	SCD_Struct_MK1 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_MK1 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMapRect:(SCD_Struct_MK1)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(SCD_Struct_MK1)mapRect;
@end
