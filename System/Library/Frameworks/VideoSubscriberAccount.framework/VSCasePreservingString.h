/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface VSCasePreservingString : NSString {

	NSString* _underlyingString;

}
-(unsigned long long)length;
-(id)initWithString:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)capitalizedString;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
-(id)localizedUppercaseString;
@end

