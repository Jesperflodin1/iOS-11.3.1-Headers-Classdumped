/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSActionPrivate.h>

@protocol BCSActionDelegate, BCSParsedDataPrivate;
@class NSDictionary, BCSActionPickerViewAssistant, NSURL, NSString, NSArray;

@interface BCSAction : NSObject <BCSActionPrivate> {

	BCSActionPickerViewAssistant* _actionPickerViewAssistant;
	id<BCSActionDelegate> delegate;
	NSURL* urlThatCanBeOpened;
	id<BCSParsedDataPrivate> _data;
	NSURL* _url;

}

@property (nonatomic,readonly) id<BCSParsedDataPrivate> data;                                               //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BCSActionDelegate> delegate; 
@property (nonatomic,readonly) NSURL * urlThatCanBeOpened; 
@property (nonatomic,copy,readonly) NSString * defaultActionTargetApplicationBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionTitle; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionDescription; 
@property (nonatomic,copy,readonly) NSString * localizedActionDescription; 
@property (nonatomic,readonly) BOOL canSkipUnlock; 
@property (nonatomic,copy,readonly) NSArray * actionPickerItems; 
@property (nonatomic,copy,readonly) NSDictionary * debugDescriptionDictionary; 
+(void)getActionWithData:(id)arg1 codePayload:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<BCSActionDelegate>)delegate;
-(void)setDelegate:(id<BCSActionDelegate>)arg1 ;
-(NSURL *)url;
-(long long)type;
-(id<BCSParsedDataPrivate>)data;
-(id)initWithData:(id)arg1 ;
-(void)performDefaultAction;
-(NSURL *)urlThatCanBeOpened;
-(NSArray *)actionPickerItems;
-(NSString *)localizedDefaultActionDescription;
-(NSString *)defaultActionTargetApplicationBundleIdentifier;
-(void)performAction;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(NSString *)extraPreviewText;
-(void)showActionPicker;
-(NSString *)localizedDefaultActionTitle;
-(BOOL)canSkipUnlock;
-(NSDictionary *)debugDescriptionDictionary;
@end

