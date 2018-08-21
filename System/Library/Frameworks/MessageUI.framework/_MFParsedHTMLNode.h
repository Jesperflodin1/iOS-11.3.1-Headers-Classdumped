/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageBodyTreeNode.h>
#import <libobjc.A.dylib/MFMessageBodyConsumableInnerTextNode.h>

@class NSMutableArray, NSString;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {

	NSMutableArray* _childNodes;
	_MFParsedHTMLNode* _parentNode;
	_MFParsedHTMLNode* _nextSibling;
	NSString* _htmlString;
	unsigned long long _startLocation;
	unsigned long long _endLocation;

}

@property (assign,nonatomic) _MFParsedHTMLNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic) _MFParsedHTMLNode * nextSibling;               //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,readonly) BOOL hasChildNodes; 
@property (nonatomic,readonly) _MFParsedHTMLNode * firstChild; 
@property (nonatomic,readonly) _MFParsedHTMLNode * lastChild; 
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,retain) NSString * htmlString;                         //@synthesize htmlString=_htmlString - In the implementation block
@property (assign,nonatomic) unsigned long long startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) unsigned long long endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParentNode:(_MFParsedHTMLNode *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)recursiveDescription;
-(unsigned long long)startLocation;
-(void)setStartLocation:(unsigned long long)arg1 ;
-(unsigned long long)endLocation;
-(void)setEndLocation:(unsigned long long)arg1 ;
-(_MFParsedHTMLNode *)lastChild;
-(NSString *)tagName;
-(_MFParsedHTMLNode *)firstChild;
-(_MFParsedHTMLNode *)parentNode;
-(_MFParsedHTMLNode *)nextSibling;
-(void)appendChild:(id)arg1 ;
-(NSString *)htmlString;
-(void)collectDescendanceIntoArray:(id)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(BOOL)hasChildNodes;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)setNextSibling:(_MFParsedHTMLNode *)arg1 ;
-(void)addRecursiveDescriptionWithLevel:(unsigned long long)arg1 toString:(id)arg2 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
@end

