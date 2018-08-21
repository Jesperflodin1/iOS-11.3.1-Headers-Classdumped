/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DASettingsResponseDelegate.h>

@class DAOofParams;

@interface DADClientSettingsDelegate : DADClientDelegate <DASettingsResponseDelegate> {

	BOOL _isUpdate;
	DAOofParams* _requestParams;
	DAOofParams* _responseParams;

}

@property (assign,nonatomic) BOOL isUpdate;                             //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,retain) DAOofParams * requestParams;               //@synthesize requestParams=_requestParams - In the implementation block
@property (nonatomic,retain) DAOofParams * responseParams;              //@synthesize responseParams=_responseParams - In the implementation block
-(void)dealloc;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)settingsRequestFinishedWithResults:(id)arg1 status:(long long)arg2 error:(id)arg3 ;
-(void)disable;
-(DAOofParams *)requestParams;
-(void)setRequestParams:(DAOofParams *)arg1 ;
-(BOOL)isUpdate;
-(id)initWithAccountID:(id)arg1 requestDictionary:(id)arg2 forUpdate:(BOOL)arg3 client:(id)arg4 ;
-(void)beginSettingsRequest;
-(BOOL)isOofSupported;
-(void)setResponseParams:(DAOofParams *)arg1 ;
-(DAOofParams *)responseParams;
-(void)finishWithError:(id)arg1 ;
@end

