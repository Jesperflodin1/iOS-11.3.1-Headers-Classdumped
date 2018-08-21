/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject {

	RKMontrealModel* _model;
	RKNLEventTokenizer* _tokenizer;
	const IOMappings* _ioMappings;
	int _outputPermutation[5];

}
-(id)init;
-(id)_identifyOwnedTokenSequences:(id)arg1 ;
-(id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(RKEventIdentifierRange*)arg3 ;
-(id)identifyStrings:(id)arg1 ;
-(id)identifyMessage:(id)arg1 ;
-(id)identifyText:(id)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
@end
