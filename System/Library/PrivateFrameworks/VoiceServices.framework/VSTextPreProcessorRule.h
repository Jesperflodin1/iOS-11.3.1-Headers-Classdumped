/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString;

@interface VSTextPreProcessorRule : NSObject {

	NSString* _matchPattern;
	NSString* _replacement;
	BOOL _caseSensitive;
	BOOL _eatPunctuation;

}
-(void)dealloc;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)matchedString:(id)arg1 forTokenInRange:(SCD_Struct_VS12*)arg2 ;
@end

