#ifndef DATA_TYPES_HPP
#define DATA_TYPES_HPP

#include <cstdint>  //std::int64_t, std::int32_t...
#include <cstddef>  //std::size_t
#include <memory>   //std::unique_ptr<T>, std::shared_ptr<T>, std::weak_ptr<T>

namespace Prelude {
   namespace Core {
      namespace DataTypes {
         using Int64   = std::int64_t;
         using Int32   = std::int32_t;
         using Int16   = std::int16_t;
         using Int8    = std::int8_t;
         using Int     = std::int_fast64_t;

         using UInt64  = std::uint64_t;
         using UInt32  = std::uint32_t;
         using UInt16  = std::uint16_t;
         using UInt8   = std::uint8_t;
         using UInt    = std::uint_fast64_t;

         using Float32 = float;
         using Float64 = double;

         using Char8   = char;
         using Char16  = char16_t;
         using Char32  = char32_t;

         template <typename T>
         using UniquePointer  = std::unique_ptr<T>;
         template <typename T>
         using SharedPointer = std::shared_ptr<T>;
         template <typename T>
         using WeakPointer   = std::weak_ptr<T>;

         using Size   = std::size_t;

      }  //!DataTypes
   }  //!Core
}  //!Prelude


#endif  //!DATA_TYPES_HPP
