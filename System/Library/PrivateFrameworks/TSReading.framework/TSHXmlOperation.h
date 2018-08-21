/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSHRequestDataOperation.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSString;

@interface TSHXmlOperation : TSHRequestDataOperation <NSXMLParserDelegate> {

	NSXMLParser* mParser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 ;
-(void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5 ;
-(void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5 ;
-(void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3 ;
-(void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3 ;
-(void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3 ;
-(void)parser:(id)arg1 didEndMappingPrefix:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3 ;
-(void)parser:(id)arg1 foundComment:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(void)dealloc;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3 ;
-(id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5 ;
-(void)start:(id)arg1 notifyWhenFinished:(id)arg2 ;
-(id)prefix:(id)arg1 ;
@end
