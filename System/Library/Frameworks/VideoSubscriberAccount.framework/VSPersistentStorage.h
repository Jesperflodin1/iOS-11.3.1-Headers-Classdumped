/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSAccountStore, VSAccountChannelsCenter, VSPrivacyVoucherLockbox, VSPrivacyFacade;

@interface VSPersistentStorage : NSObject {

	VSAccountStore* _accountStore;
	VSAccountChannelsCenter* _channelsCenter;
	VSPrivacyVoucherLockbox* _voucherLockbox;
	VSPrivacyFacade* _privacyFacade;

}

@property (nonatomic,readonly) VSAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) VSAccountChannelsCenter * channelsCenter;              //@synthesize channelsCenter=_channelsCenter - In the implementation block
@property (nonatomic,readonly) VSPrivacyVoucherLockbox * voucherLockbox;              //@synthesize voucherLockbox=_voucherLockbox - In the implementation block
@property (nonatomic,readonly) VSPrivacyFacade * privacyFacade;                       //@synthesize privacyFacade=_privacyFacade - In the implementation block
+(id)defaultStorageDirectoryURL;
-(id)init;
-(VSAccountStore *)accountStore;
-(id)initWithAccountStoreClass:(Class)arg1 channelsCenterClass:(Class)arg2 ;
-(VSPrivacyFacade *)privacyFacade;
-(VSPrivacyVoucherLockbox *)voucherLockbox;
-(id)initWithAccountStoreClass:(Class)arg1 ;
-(VSAccountChannelsCenter *)channelsCenter;
@end

