/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSString, CRKOPFPackageContents, NSMutableArray, CRKChapter, NSMutableString;

@interface CRKParseNCXTableOfContentsOperation : CATOperation <NSXMLParserDelegate> {

	NSXMLParser* mNCXParser;
	NSString* mNCXFilePath;
	CRKOPFPackageContents* mPackageContents;
	NSMutableArray* mChapters;
	CRKChapter* mCurrentChapter;
	NSMutableArray* mParentChapters;
	NSMutableString* mCurrentText;
	NSString* mCurrentElementName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithFilePath:(id)arg1 packageContents:(id)arg2 ;
@end

