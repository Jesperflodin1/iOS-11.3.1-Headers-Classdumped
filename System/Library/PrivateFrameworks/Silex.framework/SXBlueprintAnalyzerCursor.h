/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {

	double _highestMaxY;
	NSArray* _path;
	NSMutableArray* _mutablePath;

}

@property (nonatomic,readonly) NSMutableArray * mutablePath;              //@synthesize mutablePath=_mutablePath - In the implementation block
@property (assign,nonatomic) double highestMaxY;                          //@synthesize highestMaxY=_highestMaxY - In the implementation block
@property (nonatomic,retain) NSArray * path;                              //@synthesize path=_path - In the implementation block
-(id)init;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
-(void)addPathComponent:(id)arg1 ;
-(void)removePathComponent:(id)arg1 ;
-(double)highestMaxY;
-(void)setHighestMaxY:(double)arg1 ;
-(NSMutableArray *)mutablePath;
@end

