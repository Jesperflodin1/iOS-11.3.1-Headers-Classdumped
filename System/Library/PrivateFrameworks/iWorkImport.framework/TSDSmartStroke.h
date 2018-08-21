/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class NSString;

@interface TSDSmartStroke : TSDStroke {

	NSString* mStrokeName;
	double mPatternOffsetDistance;

}

@property (nonatomic,copy,readonly) NSString * strokeName; 
@property (nonatomic,readonly) double patternOffsetDistance; 
+(id)p_mapOfStrokeNamesToAlternatesForOldVersions;
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
+(Class)classForName:(id)arg1 ;
-(void)saveToArchive:(StrokeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(double)patternOffsetDistance;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 patternOffsetDistance:(double)arg8 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)canApplyDirectlyToRepCALayer;
-(BOOL)shouldAntialiasDefeat;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(NSString *)strokeName;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 ;
@end

