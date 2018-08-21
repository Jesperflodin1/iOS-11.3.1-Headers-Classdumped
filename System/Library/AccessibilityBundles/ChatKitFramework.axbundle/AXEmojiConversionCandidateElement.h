/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:04 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/ChatKitFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class CKMessageEntryTextViewAccessibility, NSString;

@interface AXEmojiConversionCandidateElement : UIAccessibilityElement {

	CKMessageEntryTextViewAccessibility* _textView;
	NSString* _candidateString;
	id _candidateEmojiList;
	NSString* _conversionLanguage;
	unsigned long long _currentIndex;
	NSRange _candidateRange;

}

@property (nonatomic,retain) CKMessageEntryTextViewAccessibility * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * candidateString;                                    //@synthesize candidateString=_candidateString - In the implementation block
@property (assign,nonatomic) NSRange candidateRange;                                      //@synthesize candidateRange=_candidateRange - In the implementation block
@property (nonatomic,copy) id candidateEmojiList;                                         //@synthesize candidateEmojiList=_candidateEmojiList - In the implementation block
@property (nonatomic,copy) NSString * conversionLanguage;                                 //@synthesize conversionLanguage=_conversionLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long currentIndex;                           //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,readonly) id currentEmoji; 
-(NSString *)candidateString;
-(BOOL)selectEmoji:(id)arg1 ;
-(id)currentEmoji;
-(void)setCandidateString:(NSString *)arg1 ;
-(void)setCandidateEmojiList:(id)arg1 ;
-(void)setConversionLanguage:(NSString *)arg1 ;
-(id)candidateEmojiList;
-(NSString *)conversionLanguage;
-(id)candidateEmojiArray;
-(unsigned long long)currentIndex;
-(void)setTextView:(CKMessageEntryTextViewAccessibility *)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(CKMessageEntryTextViewAccessibility *)textView;
-(NSRange)candidateRange;
-(void)setCandidateRange:(NSRange)arg1 ;
@end
