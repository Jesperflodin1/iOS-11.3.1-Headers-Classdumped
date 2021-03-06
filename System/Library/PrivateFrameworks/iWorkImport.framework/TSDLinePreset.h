/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject {

	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;
	TSDStroke* mStroke;

}

@property (nonatomic,copy,readonly) TSDLineEnd * headLineEnd; 
@property (nonatomic,copy,readonly) TSDLineEnd * tailLineEnd; 
@property (nonatomic,copy,readonly) TSDStroke * stroke; 
+(id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSDStroke *)stroke;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
@end

