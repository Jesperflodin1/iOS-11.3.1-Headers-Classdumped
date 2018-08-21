/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PEXName, PEXNameItem, NSMutableSet;

@interface PEXMergedNameItem : NSObject {

	PEXName* _mergedName;
	PEXNameItem* _originalNameItem;
	unsigned long long _fodMerges;
	NSMutableSet* _mergedStreetNames;
	NSMutableSet* _mergedCityNames;

}

@property (nonatomic,retain) PEXName * mergedName;                          //@synthesize mergedName=_mergedName - In the implementation block
@property (nonatomic,retain) PEXNameItem * originalNameItem;                //@synthesize originalNameItem=_originalNameItem - In the implementation block
@property (assign,nonatomic) unsigned long long fodMerges;                  //@synthesize fodMerges=_fodMerges - In the implementation block
@property (nonatomic,retain) NSMutableSet * mergedStreetNames;              //@synthesize mergedStreetNames=_mergedStreetNames - In the implementation block
@property (nonatomic,retain) NSMutableSet * mergedCityNames;                //@synthesize mergedCityNames=_mergedCityNames - In the implementation block
-(PEXName *)mergedName;
-(void)setMergedName:(PEXName *)arg1 ;
-(PEXNameItem *)originalNameItem;
-(void)setOriginalNameItem:(PEXNameItem *)arg1 ;
-(unsigned long long)fodMerges;
-(void)setFodMerges:(unsigned long long)arg1 ;
-(NSMutableSet *)mergedStreetNames;
-(void)setMergedStreetNames:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mergedCityNames;
-(void)setMergedCityNames:(NSMutableSet *)arg1 ;
@end

