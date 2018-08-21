/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechSynthesisRecordMutating.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating> {

	AFSpeechSynthesisRecord* _baseModel;
	NSString* _utterance;
	unsigned long long _beginTimestamp;
	unsigned long long _endTimestamp;
	struct {
		unsigned isDirty : 1;
		unsigned hasUtterance : 1;
		unsigned hasBeginTimestamp : 1;
		unsigned hasEndTimestamp : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setBeginTimestamp:(unsigned long long)arg1 ;
-(void)setEndTimestamp:(unsigned long long)arg1 ;
-(void)setUtterance:(id)arg1 ;
@end

