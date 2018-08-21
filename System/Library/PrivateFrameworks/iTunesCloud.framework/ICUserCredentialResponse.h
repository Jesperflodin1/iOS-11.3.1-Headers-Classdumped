/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _iCloudIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                    //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * iCloudIdentityProperties;              //@synthesize iCloudIdentityProperties=_iCloudIdentityProperties - In the implementation block
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)iCloudIdentityProperties;
-(void)setICloudIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)identityProperties;
@end
