/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {

	CLRegionInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_CL11 clientRegion; 
@property (nonatomic,copy) NSString * onBehalfOfBundleId; 
@property (assign,nonatomic) BOOL conservativeEntry; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic) BOOL notifyOnEntry; 
@property (assign,nonatomic) BOOL notifyOnExit; 
+(BOOL)supportsSecureCoding;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(SCD_Struct_CL11)clientRegion;
-(id)initWithClientRegion:(SCD_Struct_CL11)arg1 ;
-(id)initCircularRegionWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(BOOL)conservativeEntry;
-(CLLocationCoordinate2D)center;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_initWithCoder:(id)arg1 ;
-(double)radius;
-(void)setConservativeEntry:(BOOL)arg1 ;
-(BOOL)notifyOnEntry;
-(BOOL)notifyOnExit;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(void)_encodeWithCoder:(id)arg1 ;
-(void)setOnBehalfOfBundleId:(NSString *)arg1 ;
-(NSString *)onBehalfOfBundleId;
@end

