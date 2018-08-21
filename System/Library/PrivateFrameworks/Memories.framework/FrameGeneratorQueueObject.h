/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetImageGenerator, NSArray;

@interface FrameGeneratorQueueObject : NSObject {

	AVAssetImageGenerator* m_whichInstance;
	/*^block*/id m_completionBlock;
	NSArray* m_times;

}

@property (nonatomic,retain) AVAssetImageGenerator * generator; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,retain) NSArray * times; 
+(id)queueObjectForGenerator:(id)arg1 withTimes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(AVAssetImageGenerator *)generator;
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(void)setGenerator:(AVAssetImageGenerator *)arg1 ;
@end

