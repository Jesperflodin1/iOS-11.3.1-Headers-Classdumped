/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;

@interface MKPlaceReviewAvatarGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _cachedMaskedImages;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
-(id)init;
-(void)monogramForReviewerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)avatarForReview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
@end

