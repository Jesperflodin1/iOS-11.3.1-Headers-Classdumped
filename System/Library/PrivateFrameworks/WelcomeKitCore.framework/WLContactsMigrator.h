/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitCore/WLMigrationWebService.h>

@class CNContactStore;

@interface WLContactsMigrator : WLMigrationWebService {

	CNContactStore* _contactStore;

}
+(id)contentType;
-(id)contentType;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3 ;
-(id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1 ;
@end

