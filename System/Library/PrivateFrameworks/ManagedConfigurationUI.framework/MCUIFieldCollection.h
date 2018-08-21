/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {

	NSMutableArray* _payloadFieldArrays;
	long long _currentPayloadIndex;
	long long _currentFieldIndex;
	MCUIPayloadUserInputField* _currentField;
	BOOL _isFinalField;

}
-(id)initWithUserInput:(id)arg1 ;
-(void)_setCurrentFieldToCurrentIndices;
-(BOOL)currentFieldIsLastInPayload;
-(void)_setIsFinalField;
-(id)userInputResponses;
-(id)currentField;
-(void)moveToNextField;
-(void)restartCurrentPayload;
-(BOOL)currentFieldIsFinalField;
-(BOOL)currentFieldIsSinglePasswordField;
-(id)responseDictionariesForCurrentPayload;
-(long long)currentPayloadIndex;
@end

