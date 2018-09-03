//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface LCKeywordHelper : NSObject
{
    NSString *m_instrumentTypeTag;
    NSString *m_instrumentSubTypeTag;
    NSString *m_genreTag;
    NSSet *m_descriptors;
}

+ (id)extractTagsFromFileURL:(id)arg1;
+ (id)extractTagsFromString:(id)arg1;
+ (void)loadSearchKeyTranslation;
+ (id)createDictionaryFromScrambledFile:(id)arg1;
+ (void)load1TranslationForKey:(id)arg1 andObject:(id)arg2;
+ (id)decryptData:(id)arg1;
+ (id)keywordsForCategory:(int)arg1;
+ (id)localizedKeywordsForKeywords:(id)arg1;
+ (id)subKeywordsForKeyword:(id)arg1;
+ (id)parentKeywordForKeyword:(id)arg1;
+ (id)allKeywords;
+ (void)createKeywordFile;
+ (id)columnNameForKeyword:(id)arg1;
+ (long long)keywordCategoryForKeyword:(id)arg1;
+ (void)setKeywordId:(long long)arg1 categoryId:(long long)arg2 forKeyword:(id)arg3;
+ (long long)keywordIdForKeyword:(id)arg1;
+ (id)keywordForKeywordId:(long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)extractKeywordsFromFilePath:(id)arg1;
- (id)parsePathComponent:(id)arg1 withSeparator:(id)arg2;
- (id)examineWord:(id)arg1;
- (id)normalizeWord:(id)arg1;
- (id)stripTrailingDigits:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)setGenreTag:(id)arg1;
- (id)genreTag;
- (void)setInstrumentSubTypeTag:(id)arg1;
- (id)instrumentSubTypeTag;
- (void)setInstrumentTypeTag:(id)arg1;
- (id)instrumentTypeTag;
- (void)setDescriptors:(id)arg1;
- (id)descriptors;

@end

