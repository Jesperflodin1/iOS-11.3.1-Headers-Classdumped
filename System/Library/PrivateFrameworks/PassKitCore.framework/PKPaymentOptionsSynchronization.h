/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentOptionsSynchronizationDelegate;
@interface PKPaymentOptionsSynchronization : NSObject {

	BOOL _shouldSyncToCloud;
	id<PKPaymentOptionsSynchronizationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldSyncToCloud;                                                   //@synthesize shouldSyncToCloud=_shouldSyncToCloud - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentOptionsSynchronizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PKPaymentOptionsSynchronizationDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentOptionsSynchronizationDelegate>)arg1 ;
-(void)_updateSynchronizationBehavior;
-(BOOL)shouldSyncToCloud;
-(void)setShouldSyncToCloud:(BOOL)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
@end

