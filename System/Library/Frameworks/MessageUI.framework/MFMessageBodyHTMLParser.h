/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {

	NSScanner* _scanner;

}
-(BOOL)parse;
-(void)dealloc;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)didFindError:(id)arg1 ;
-(void)_findBody;
-(void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2 ;
-(BOOL)_isMilestoneTagName:(id)arg1 ;
-(id)initWithHTML:(id)arg1 ;
@end

