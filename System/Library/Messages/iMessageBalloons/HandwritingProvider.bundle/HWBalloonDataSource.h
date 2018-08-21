/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class HWHandwritingItem, HWAbstractBalloonController;

@interface HWBalloonDataSource : IMBalloonPluginDataSource {

	HWHandwritingItem* _cachedHandwritingItem;
	HWAbstractBalloonController* _balloonController;

}

@property (nonatomic,readonly) HWHandwritingItem * handwritingFromPayload; 
@property (assign,nonatomic,__weak) HWAbstractBalloonController * balloonController;              //@synthesize balloonController=_balloonController - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimate; 
-(HWHandwritingItem *)handwritingFromPayload;
-(void)initialMessageInfoDidChange;
-(BOOL)canProvideSize;
-(unsigned long long)playbackType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)shouldAnimate;
-(void)stopPlayback;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)payloadDidChange;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(HWAbstractBalloonController *)balloonController;
-(void)setBalloonController:(HWAbstractBalloonController *)arg1 ;
@end
