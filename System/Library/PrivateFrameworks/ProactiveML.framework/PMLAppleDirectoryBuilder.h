/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSRegularExpression;

@interface PMLAppleDirectoryBuilder : NSObject {

	NSMutableData* _data;
	NSRegularExpression* _emailGuessingRegexp;

}
-(id)init;
-(void)_loadContactsFromTextLine:(id)arg1 filepath:(id)arg2 ;
-(id)guessEmailFromIM:(id)arg1 ;
-(void)addPhoneNumber:(id)arg1 withEmailAddress:(id)arg2 ;
-(void)loadContactsFromTextFilepath:(id)arg1 ;
-(void)loadContactsFromDirectory:(id)arg1 ;
-(id)serialize;
@end

