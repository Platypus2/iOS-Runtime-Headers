/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface AccessibilityTextMarker : NSObject {
    struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { 
            struct HashTable<unsigned int,std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >,WTF::PairFirstExtractor<std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::HashTraits<unsigned int> > { 
                struct pair<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject> > {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x2; struct HashMap<WebCore::RenderObject*,unsigned int,WTF::PtrHash<WebCore::RenderObject*>,WTF::HashTraits<WebCore::RenderObject*>,WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebCore::RenderObject*,std::pair<WebCore::RenderObject*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::RenderObject*, unsigned int> >,WTF::PtrHash<WebCore::RenderObject*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::RenderObject*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::RenderObject*> > { 
                struct pair<WebCore::RenderObject*,unsigned int> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x3; struct HashMap<WebCore::Widget*,unsigned int,WTF::PtrHash<WebCore::Widget*>,WTF::HashTraits<WebCore::Widget*>,WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebCore::Widget*,std::pair<WebCore::Widget*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::Widget*, unsigned int> >,WTF::PtrHash<WebCore::Widget*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::Widget*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::Widget*> > { 
                struct pair<WebCore::Widget*,unsigned int> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x4; struct HashSet<WebCore::Node*,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { 
            struct HashTable<WebCore::Node*,WebCore::Node*,WTF::IdentityExtractor<WebCore::Node*>,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { 
                struct Node {} **m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x5; struct HashSet<unsigned int,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int> > { 
            struct HashTable<unsigned int,unsigned int,WTF::IdentityExtractor<unsigned int>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<unsigned int> > { 
                unsigned int *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x6; struct Timer<WebCore::AXObjectCache> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            int m_heapIndex; 
            unsigned int m_heapInsertionOrder; 
            struct AXObjectCache {} *m_object; 
            struct { 
                /* Warning: Unrecognized filer type: '"' using 'void*' */ void**__pfn; 
            } m_function; 
        } x7; struct Vector<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { 
                struct pair<WTF::RefPtr<WebCore::AccessibilityObject>,WebCore::AXObjectCache::AXNotification> {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
    struct TextMarkerData { 
        unsigned int axID; 
        struct Node {} *node; 
        int offset; 
        int affinity; 
        } x8; } *_cache;
    } _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int,std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >,WTF::PairFirstExtractor<std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::HashTraits<unsigned int> > { struct pair<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject*,unsigned int,WTF::PtrHash<WebCore::RenderObject*>,WTF::HashTraits<WebCore::RenderObject*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject*,std::pair<WebCore::RenderObject*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::RenderObject*, unsigned int> >,WTF::PtrHash<WebCore::RenderObject*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::RenderObject*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::RenderObject*> > { struct pair<WebCore::RenderObject*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget*,unsigned int,WTF::PtrHash<WebCore::Widget*>,WTF::HashTraits<WebCore::Widget*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget*,std::pair<WebCore::Widget*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::Widget*, unsigned int> >,WTF::PtrHash<WebCore::Widget*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::Widget*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::Widget*> > { struct pair<WebCore::Widget*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashSet<WebCore::Node*,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct HashTable<WebCore::Node*,WebCore::Node*,WTF::IdentityExtractor<WebCore::Node*>,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<unsigned int,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int,unsigned int,WTF::IdentityExtractor<unsigned int>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct Timer<WebCore::AXObjectCache> { int (**x_7_1_1)(); double x_7_1_2; double x_7_1_3; int x_7_1_4; unsigned int x_7_1_5; struct AXObjectCache {} *x_7_1_6; struct { int *x_7_2_1; } x_7_1_7; } x7; struct Vector<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { unsigned int x_8_1_1; struct VectorBuffer<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { struct pair<WTF::RefPtr<WebCore::AccessibilityObject>,WebCore::AXObjectCache::AXNotification> {} *x_2_2_1; unsigned int x_2_2_2; } x_8_1_2; } x8; }*)arg2;

- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(id)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int,std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >,WTF::PairFirstExtractor<std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::HashTraits<unsigned int> > { struct pair<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject*,unsigned int,WTF::PtrHash<WebCore::RenderObject*>,WTF::HashTraits<WebCore::RenderObject*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject*,std::pair<WebCore::RenderObject*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::RenderObject*, unsigned int> >,WTF::PtrHash<WebCore::RenderObject*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::RenderObject*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::RenderObject*> > { struct pair<WebCore::RenderObject*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget*,unsigned int,WTF::PtrHash<WebCore::Widget*>,WTF::HashTraits<WebCore::Widget*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget*,std::pair<WebCore::Widget*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::Widget*, unsigned int> >,WTF::PtrHash<WebCore::Widget*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::Widget*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::Widget*> > { struct pair<WebCore::Widget*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashSet<WebCore::Node*,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct HashTable<WebCore::Node*,WebCore::Node*,WTF::IdentityExtractor<WebCore::Node*>,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<unsigned int,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int,unsigned int,WTF::IdentityExtractor<unsigned int>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct Timer<WebCore::AXObjectCache> { int (**x_7_1_1)(); double x_7_1_2; double x_7_1_3; int x_7_1_4; unsigned int x_7_1_5; struct AXObjectCache {} *x_7_1_6; struct { int *x_7_2_1; } x_7_1_7; } x7; struct Vector<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { unsigned int x_8_1_1; struct VectorBuffer<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { struct pair<WTF::RefPtr<WebCore::AccessibilityObject>,WebCore::AXObjectCache::AXNotification> {} *x_2_2_1; unsigned int x_2_2_2; } x_8_1_2; } x8; }*)arg2;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x1; struct Node {} *x2; int x3; int x4; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int,std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >,WTF::PairFirstExtractor<std::pair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >,WTF::HashTraits<unsigned int> > { struct pair<unsigned int,WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject*,unsigned int,WTF::PtrHash<WebCore::RenderObject*>,WTF::HashTraits<WebCore::RenderObject*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject*,std::pair<WebCore::RenderObject*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::RenderObject*, unsigned int> >,WTF::PtrHash<WebCore::RenderObject*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::RenderObject*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::RenderObject*> > { struct pair<WebCore::RenderObject*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget*,unsigned int,WTF::PtrHash<WebCore::Widget*>,WTF::HashTraits<WebCore::Widget*>,WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget*,std::pair<WebCore::Widget*, unsigned int>,WTF::PairFirstExtractor<std::pair<WebCore::Widget*, unsigned int> >,WTF::PtrHash<WebCore::Widget*>,WTF::PairHashTraits<WTF::HashTraits<WebCore::Widget*>, WTF::HashTraits<unsigned int> >,WTF::HashTraits<WebCore::Widget*> > { struct pair<WebCore::Widget*,unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashSet<WebCore::Node*,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct HashTable<WebCore::Node*,WebCore::Node*,WTF::IdentityExtractor<WebCore::Node*>,WTF::PtrHash<WebCore::Node*>,WTF::HashTraits<WebCore::Node*>,WTF::HashTraits<WebCore::Node*> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<unsigned int,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int,unsigned int,WTF::IdentityExtractor<unsigned int>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct Timer<WebCore::AXObjectCache> { int (**x_7_1_1)(); double x_7_1_2; double x_7_1_3; int x_7_1_4; unsigned int x_7_1_5; struct AXObjectCache {} *x_7_1_6; struct { int *x_7_2_1; } x_7_1_7; } x7; struct Vector<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { unsigned int x_8_1_1; struct VectorBuffer<std::pair<WTF::RefPtr<WebCore::AccessibilityObject>, WebCore::AXObjectCache::AXNotification>,0ul> { struct pair<WTF::RefPtr<WebCore::AccessibilityObject>,WebCore::AXObjectCache::AXNotification> {} *x_2_2_1; unsigned int x_2_2_2; } x_8_1_2; } x8; }*)arg2;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; })visiblePosition;

@end
