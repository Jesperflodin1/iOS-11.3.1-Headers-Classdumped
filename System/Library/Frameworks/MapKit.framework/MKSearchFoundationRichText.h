/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(void)setText:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)completionHandlers;
-(void)setCompletionHandlers:(id)arg1 ;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invokeCompletionHandlers;
-(BOOL)isRichTextResolved;
@end

