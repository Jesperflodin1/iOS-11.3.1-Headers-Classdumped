//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MALocalizationUtilities : NSObject
{
    NSString *_systemLanguage;
}

+ (id)sharedUtilities;
- (void).cxx_destruct;
@property(readonly) _Bool langIsAnyChinese;
@property(readonly) _Bool langIsTaiwanTraditionalChinese;
@property(readonly) _Bool langIsHongKongChinese;
@property(readonly) _Bool langIsTraditionalChinese;
@property(readonly) _Bool langIsGreek;
@property(readonly) _Bool langIsThai;
@property(readonly) _Bool langIsKorean;
@property(readonly) _Bool langIsJapanese;
@property(readonly) _Bool langIsChinese;
@property(readonly) _Bool langIsJapaneseOrChinese;
@property(readonly) _Bool langIsKindOfChinese;
@property(readonly) NSString *usedSystemLanguage;

@end
