/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {

	NSMutableString* _plainString;
	BOOL _extractLinks;
	NSMutableString* _mutablePlainString;

}

@property (nonatomic,readonly) NSString * plainString; 
@property (nonatomic,readonly) NSMutableString * mutablePlainString;              //@synthesize mutablePlainString=_mutablePlainString - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2 ;
-(id)resultsForLogging;
-(NSString *)plainString;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(NSMutableString *)mutablePlainString;
@end

