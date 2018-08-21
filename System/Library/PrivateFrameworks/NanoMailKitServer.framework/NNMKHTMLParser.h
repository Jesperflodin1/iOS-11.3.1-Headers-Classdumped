/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSString, NSMutableData, NSMutableArray;

@interface NNMKHTMLParser : NSObject {

	BOOL _containsBlacklistedElements;
	BOOL _parsingHead;
	BOOL _parsingBody;
	BOOL _cancelled;
	BOOL _isLastCharAddedLineBreak;
	NSString* _htmlBodyToParse;
	unsigned long long _encoding;
	xmlParserCtxt* _parserContext;
	NSMutableData* _charactersBuffer;
	NSMutableArray* _stringAttributesStack;
	NSMutableArray* _isQuoteElementStack;
	unsigned long long _currentQuoteLevel;
	NSMutableArray* _listStack;
	unsigned long long _currentListLevel;
	NSString* _ignoringElementSubtree;
	unsigned long long _bodyTagStartIndex;
	NSString* _bodyTagStyle;
	unsigned long long _currentHeadTagStartIndex;
	unsigned long long _currentImgTagStartIndex;
	NSString* _currentImgTagSource;
	xmlSAXHandler* _parsingSAXHandler;

}

@property (nonatomic,retain) NSString * htmlBodyToParse;                               //@synthesize htmlBodyToParse=_htmlBodyToParse - In the implementation block
@property (assign,nonatomic) unsigned long long encoding;                              //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) xmlSAXHandler* parsingSAXHandler;                         //@synthesize parsingSAXHandler=_parsingSAXHandler - In the implementation block
@property (assign,nonatomic) xmlParserCtxt* parserContext;                             //@synthesize parserContext=_parserContext - In the implementation block
@property (nonatomic,retain) NSMutableData * charactersBuffer;                         //@synthesize charactersBuffer=_charactersBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringAttributesStack;                   //@synthesize stringAttributesStack=_stringAttributesStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * isQuoteElementStack;                     //@synthesize isQuoteElementStack=_isQuoteElementStack - In the implementation block
@property (assign,nonatomic) unsigned long long currentQuoteLevel;                     //@synthesize currentQuoteLevel=_currentQuoteLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * listStack;                               //@synthesize listStack=_listStack - In the implementation block
@property (assign,nonatomic) unsigned long long currentListLevel;                      //@synthesize currentListLevel=_currentListLevel - In the implementation block
@property (assign,nonatomic) BOOL isLastCharAddedLineBreak;                            //@synthesize isLastCharAddedLineBreak=_isLastCharAddedLineBreak - In the implementation block
@property (nonatomic,retain) NSString * ignoringElementSubtree;                        //@synthesize ignoringElementSubtree=_ignoringElementSubtree - In the implementation block
@property (assign,nonatomic) unsigned long long bodyTagStartIndex;                     //@synthesize bodyTagStartIndex=_bodyTagStartIndex - In the implementation block
@property (nonatomic,retain) NSString * bodyTagStyle;                                  //@synthesize bodyTagStyle=_bodyTagStyle - In the implementation block
@property (assign,nonatomic) unsigned long long currentHeadTagStartIndex;              //@synthesize currentHeadTagStartIndex=_currentHeadTagStartIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentImgTagStartIndex;               //@synthesize currentImgTagStartIndex=_currentImgTagStartIndex - In the implementation block
@property (nonatomic,retain) NSString * currentImgTagSource;                           //@synthesize currentImgTagSource=_currentImgTagSource - In the implementation block
@property (assign,nonatomic) BOOL containsBlacklistedElements;                         //@synthesize containsBlacklistedElements=_containsBlacklistedElements - In the implementation block
@property (assign,nonatomic) BOOL parsingHead;                                         //@synthesize parsingHead=_parsingHead - In the implementation block
@property (assign,nonatomic) BOOL parsingBody;                                         //@synthesize parsingBody=_parsingBody - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                           //@synthesize cancelled=_cancelled - In the implementation block
-(id)init;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setEncoding:(unsigned long long)arg1 ;
-(unsigned long long)encoding;
-(void)_flushCharactersIfNeeded;
-(NSString *)ignoringElementSubtree;
-(BOOL)_isElementIgnorable:(id)arg1 ;
-(void)setIgnoringElementSubtree:(NSString *)arg1 ;
-(BOOL)_isElementBlacklisted:(id)arg1 attributes:(const char**)arg2 ;
-(void)setContainsBlacklistedElements:(BOOL)arg1 ;
-(BOOL)_isElementQuoteElement:(id)arg1 attributes:(const char**)arg2 ;
-(unsigned long long)currentQuoteLevel;
-(void)setCurrentQuoteLevel:(unsigned long long)arg1 ;
-(void)_requireNewLine;
-(BOOL)_isElementList:(id)arg1 ordered:(BOOL*)arg2 ;
-(unsigned long long)currentListLevel;
-(void)setCurrentListLevel:(unsigned long long)arg1 ;
-(NSMutableArray *)listStack;
-(BOOL)_isElementListItem:(id)arg1 ;
-(void)_appendString:(id)arg1 ;
-(BOOL)_isElementImage:(id)arg1 ;
-(void)_appendImageFromAttributes:(const char**)arg1 ;
-(BOOL)_isElementDisplayedInBlock:(id)arg1 ;
-(BOOL)_isElementLineBreak:(id)arg1 ;
-(void)_appendLineBreak;
-(void)_stringAttributeForElement:(id)arg1 attributes:(const char**)arg2 stringAttributeKey:(id*)arg3 stringAttributeValue:(id*)arg4 ;
-(id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char**)arg2 ;
-(id)_stringAttributesForStyleAttribute:(id)arg1 ;
-(void)_pushStringAttributes:(id)arg1 ;
-(NSMutableArray *)isQuoteElementStack;
-(BOOL)parsingHead;
-(BOOL)parsingBody;
-(BOOL)_isElementHead:(id)arg1 ;
-(void)setParsingHead:(BOOL)arg1 ;
-(BOOL)_isElementBody:(id)arg1 ;
-(void)setParsingBody:(BOOL)arg1 ;
-(BOOL)caresAboutHTMLContentString;
-(xmlParserCtxt*)parserContext;
-(NSString *)htmlBodyToParse;
-(void)setBodyTagStartIndex:(unsigned long long)arg1 ;
-(void)setBodyTagStyle:(NSString *)arg1 ;
-(void)setCurrentHeadTagStartIndex:(unsigned long long)arg1 ;
-(void)setCurrentImgTagStartIndex:(unsigned long long)arg1 ;
-(void)setCurrentImgTagSource:(NSString *)arg1 ;
-(unsigned long long)bodyTagStartIndex;
-(NSString *)bodyTagStyle;
-(void)processBodyHTMLContent:(id)arg1 style:(id)arg2 contentRange:(NSRange)arg3 ;
-(unsigned long long)currentHeadTagStartIndex;
-(unsigned long long)currentImgTagStartIndex;
-(void)processHeadHTMLTagContent:(id)arg1 ;
-(NSString *)currentImgTagSource;
-(void)processImgTagSource:(id)arg1 contentRange:(NSRange)arg2 ;
-(BOOL)isLastCharAddedLineBreak;
-(void)_popStringAttributes;
-(void)_appendCharacters:(const char*)arg1 length:(int)arg2 ;
-(BOOL)_isErrorBlacklisted:(xmlError*)arg1 ;
-(BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(/*^block*/id)arg2 ;
-(BOOL)isErrorTypeBlacklisted:(char*)arg1 ;
-(void)_enumerateAttributes:(const char**)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isElementIgnorable:(id)arg1 ;
-(id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2 ;
-(unsigned long long)_textAlignmentFromString:(id)arg1 ;
-(unsigned long long)_writingDirectionFromString:(id)arg1 ;
-(id)_topStringAttributes;
-(void)appendString:(id)arg1 stringAttributes:(id)arg2 ;
-(void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4 ;
-(void)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)containsBlacklistedElements;
-(void)setHtmlBodyToParse:(NSString *)arg1 ;
-(xmlSAXHandler*)parsingSAXHandler;
-(void)setParsingSAXHandler:(xmlSAXHandler*)arg1 ;
-(void)setParserContext:(xmlParserCtxt*)arg1 ;
-(NSMutableData *)charactersBuffer;
-(void)setCharactersBuffer:(NSMutableData *)arg1 ;
-(NSMutableArray *)stringAttributesStack;
-(void)setStringAttributesStack:(NSMutableArray *)arg1 ;
-(void)setIsQuoteElementStack:(NSMutableArray *)arg1 ;
-(void)setListStack:(NSMutableArray *)arg1 ;
-(void)setIsLastCharAddedLineBreak:(BOOL)arg1 ;
@end

