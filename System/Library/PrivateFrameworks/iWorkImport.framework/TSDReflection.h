/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	double mOpacity;
	double mFadeAcceleration;

}

@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double fadeAcceleration; 
+(id)instanceWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
+(BOOL)canMixWithNilObjects;
+(id)reflection;
-(void)saveToArchive:(ReflectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithOpacity:(double)arg1 ;
-(id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2 ;
-(double)fadeAcceleration;
@end

