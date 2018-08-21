/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface BBMaskedSet : NSObject {

	unsigned long long _maskBits;
	NSMutableArray* _maskObjectSets;

}

@property (nonatomic,retain) NSMutableArray * maskObjectSets;              //@synthesize maskObjectSets=_maskObjectSets - In the implementation block
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)initWithMaskBits:(unsigned long long)arg1 ;
-(id)objectsForMask:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 withMask:(unsigned long long)arg2 ;
-(void)setMaskObjectSets:(NSMutableArray *)arg1 ;
-(void)_executeUsingMask:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableArray *)maskObjectSets;
@end

