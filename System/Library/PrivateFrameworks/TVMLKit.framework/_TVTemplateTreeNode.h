/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface _TVTemplateTreeNode : NSObject {

	NSMutableArray* _derivedTemplateNodes;
	BOOL _isAbstract;
	NSString* _templateName;
	NSArray* _styleSheetURLs;
	NSArray* _finalURLs;

}

@property (nonatomic,copy,readonly) NSString * templateName;                     //@synthesize templateName=_templateName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * styleSheetURLs;                    //@synthesize styleSheetURLs=_styleSheetURLs - In the implementation block
@property (nonatomic,readonly) BOOL isAbstract;                                  //@synthesize isAbstract=_isAbstract - In the implementation block
@property (nonatomic,copy) NSArray * finalURLs;                                  //@synthesize finalURLs=_finalURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * derivedTemplateNodes; 
-(BOOL)isAbstract;
-(NSString *)templateName;
-(id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(BOOL)arg3 ;
-(id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 ;
-(NSArray *)derivedTemplateNodes;
-(void)addDerivedTemplateNode:(id)arg1 ;
-(NSArray *)styleSheetURLs;
-(NSArray *)finalURLs;
-(void)setFinalURLs:(NSArray *)arg1 ;
@end

