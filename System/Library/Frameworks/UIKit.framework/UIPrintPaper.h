/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIPrintPaper : NSObject {

	int _paperOrientation;
	id _internal;

}

@property (readonly) CGSize paperSize; 
@property (readonly) CGRect printableRect; 
+(id)bestPaperForPageSize:(CGSize)arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3 ;
+(id)_defaultPaperForOutputType:(long long)arg1 ;
+(id)_defaultPKPaperForOuptutType:(long long)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 withPapersFromArray:(id)arg2 ;
+(id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(CGSize)arg4 ;
+(id)_readyDocumentPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 contentSize:(CGSize)arg3 scaleUpForRoll:(BOOL)arg4 ;
+(id)_defaultPaperListForOutputType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CGSize)paperSize;
-(CGRect)printableRect;
-(id)_keywordForPDFMetadata;
-(id)_pkPaper;
-(void)_updatePKPaper:(id)arg1 ;
-(id)_initWithPrintKitPaper:(id)arg1 ;
-(CGRect)_printableRectForDuplex:(BOOL)arg1 ;
-(id)_localizedName;
-(id)_localizedMediaTypeName;
-(void)_setPaperOrientation:(int)arg1 ;
-(int)_paperOrientation;
-(CGRect)printRect;
@end

