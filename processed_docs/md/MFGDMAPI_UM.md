- The modelId is a timeless, unique identifier for a component or assembly in the MFGDM cloud environment.
- It is persistent and invariant — it does not change across different versions or states of the component.
- Think of the modelId as the identity of the component in the cloud world. No matter how the component evolves (changes in geometry, parameters, or metadata), its modelId remains constant.
- We intentionally use modelId in client applications to abstract away the internal cloud storage or versioning details, providing a clean and consistent way to reference a component.

- The componentId is a time-specific identifier that represents the exact state (geometry, features, properties) of a component at a particular point in time .
- It is derived from the combination of modelId and a specific timestamp .
- This ID is useful when you need to track or compare how a component has evolved over time. For instance, a component might have a different part number in one version and another in different version — each of those versions will have the same modelId but a different componentId.

### Observation and Limitations
